const axios = require('axios');

const url = 'https://gamblebox.onrender.com/score-data';
const testData = {
    name: 'testPlayer',
    score: 100
};

async function sendRequest() {
    try {
        const response = await axios.post(url, testData, {
            headers: {
                'Content-Type': 'application/json'
            }
        });
        console.log(`Response: ${response.status}`);
    } catch (error) {
        console.error(`Error: ${error.message}`);
    }
}
async function stressTest(concurrentRequests, totalRequests) {
    let completedRequests = 0;

    while (completedRequests < totalRequests) {
        const promises = [];
        for (let i = 0; i < concurrentRequests; i++) {
            promises.push(sendRequest());
        }
        await Promise.all(promises);
        completedRequests += concurrentRequests;
        console.log(`Completed ${completedRequests}/${totalRequests} requests`);
    }
}

const concurrentRequests = 10;
const totalRequests = 100;
stressTest(concurrentRequests, totalRequests);
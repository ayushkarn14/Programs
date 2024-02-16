const express = require('express');
const http=require('http');
const path=require('path');
const {Server}=require('socket.io'); 

const app=express();
const server=http.createServer(app);
const io=new Server(server);

app.use(express.static(path.resolve('./public')));
app.get('/',(req,res)=>{
    return res.sendFile("/public/index.html");
})

server.listen(5000,()=>{
    console.log("Server listening on port 5000...");
});
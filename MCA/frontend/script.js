document.addEventListener("DOMContentLoaded", function () {
    const logo = document.getElementById("logo");
    let angle = 0;

    function changeBackgroundColor() {
        const randomColor = '#' + Math.floor(Math.random() * 16777215).toString(16);
        document.body.style.backgroundColor = randomColor;
    }

    function spinLogo() {
        angle += 5;
        logo.style.transform = `rotate(${angle}deg)`;
    }

    setInterval(changeBackgroundColor, 50);
    setInterval(spinLogo, 0.01);
    const fonts = ["Arial", "Verdana", "Helvetica", "Times New Roman", "Courier New", "Georgia", "Palatino", "Garamond", "Bookman", "Comic Sans MS"];
    let fontIndex = 0;

    function changeFont() {
        document.body.style.fontFamily = fonts[fontIndex];
        fontIndex = Math.floor(Math.random() * fonts.length);
    }

    setInterval(changeFont, 50);
});
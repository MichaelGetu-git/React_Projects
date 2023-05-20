const quoteword = document.querySelector(".quote"),
writername = document.querySelector(".writer .name"),
qButton = document.querySelector("button"),
soundbut = document.querySelector(".sound"),
copybut = document.querySelector(".copy");
function newquote() {
    fetch("https://api.quotable.io/random").then(res => res.json()).then(result =>{
        console.log(result);
        quoteword.innerText = result.content;
        writername.innerText = result.author;
        qButton.innerText = "New Quote";
    })
}
soundbut.addEventListener("click", () => {
    let utterance = new SpeechSynthesisUtterance(`${quoteword.innerText} by `);
    speechSynthesis.speak(utterance);
});

copybut.addEventListener("click", () => {
    navigator.clipboard.writeText(quoteword.innerText)
});
qButton.addEventListener("click", newquote);

//Author - Anas Jawed
//Date - 28/02/2024
//21BRS1336- ANAS JAWED

const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

function reverseNumber(num) {
    let rev = 0;
    while (num > 0) {
        rev = rev * 10 + num % 10;
        num = Math.floor(num / 10);
    }
    return rev;
}

rl.question("Enter a 4-digit number: ", (num) => {
    for (let i = 0; i < 10; i++) {
        let reversed = reverseNumber(num);
        num = parseInt(num) + reversed;
        num = reverseNumber(num);
    }

    console.log("Final result after 10 iterations:", num);

    rl.close();
});

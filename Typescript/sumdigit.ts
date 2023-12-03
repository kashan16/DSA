export const sumdigit = (num : number) : number =>
{
    if(num < 0)
    {
        throw new Error("Invalid");
    }
    let sum = 0;
    while (num != 0)
    {
        sum += num % 10;
        num = Math.floor(num / 10);
    }
    return (sum);
};

console.log(sumdigit(124423));
export const Factorial = (num : number) : number =>
{
    if(num < 0)
    {
        throw new Error("Invalid number");
    }
    return num === 0 ? 1 : num * Factorial(num-1);
};

console.log(Factorial(8));
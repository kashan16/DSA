export const toBinary = (num : number) : string => 
{
    let binary = ''
    while (num !== 0)
    {
        binary = (num % 2) + binary;
        num = Math.floor(num / 2);
    }
    return binary;
}

console.log(toBinary(65));
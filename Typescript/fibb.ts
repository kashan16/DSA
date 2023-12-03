export const nthfibb = (num : number) : number => {
    if(num === 0)
    {
        return 0;
    }
    if(num <= 2)
    {
        return 1;
    }
    return(
        nthfibb(num - 1) + nthfibb(num - 2)
    );
};
for(let i = 1 ; i < 10 ; i++)
{
    console.log(nthfibb(i),"\n");
}
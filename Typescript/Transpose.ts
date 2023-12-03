function transpose(matrix: number[][]): number[][]
{
    const transposed : number[][] = Array.from(Array(matrix[0].length) , () => Array(matrix.length).fill(0));
    for(let i = 0 ; i < matrix.length ; i++)
    {
        for(let j = 0 ; j < matrix[0].length ; j++)
        {
            transposed[j][i] = matrix[i][j];
        }
    } 
    return transposed;
};
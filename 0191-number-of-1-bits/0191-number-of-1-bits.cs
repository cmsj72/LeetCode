public class Solution {
    //  https://leetcode.com/problems/number-of-1-bits/solutions/2075970/three-easy-solutions-linq-no-linq-and-a-system-library/
    
    //  LINQ
    //  https://learn.microsoft.com/ko-kr/dotnet/api/system.convert.tostring?view=net-8.0
    //  https://learning-e.tistory.com/49
    //  LINQ(Language-Intergrated Query) : 다양한 데이터 소스를 쿼리하고 조작하기 위한 일관되고 직관적인 방법을 제공하는 C#의 언어 확장 집합.
    //  친숙한 SQL 유사 구문 또는 메서드 기반 접근 방식을 사용하여 개체, 컬렉션, DB, XML 등을 쿼리할 수 있다.
    // public int HammingWeight(uint n)
    //     => Convert.ToString(n,2).Count(x=>x=='1');

    //  No LINQ:
    public int HammingWeight(uint n){
        uint c = 0;

        while(n > 0){
            c += n & 1;
            n >>= 1;
        }

        return (int) c;
    }
    //  System library (the proper real-world solution of this problem):
    // public int HammingWeight(uint n)
    //     => System.Numerics.BitOperations.PopCount(n);
}
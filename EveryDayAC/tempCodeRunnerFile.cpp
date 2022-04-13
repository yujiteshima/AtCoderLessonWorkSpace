vector<ll> divisorList(ll N)
// {
//     vector<ll> divisor;
//     int i = 1;
//     while (i * i <= N)
//     {
//         if (N % i == 0)
//         {
//             divisor.push_back(i);
//             if (i != N / i)
//             {
//                 divisor.push_back(N / i);
//             }
//         }
//         ++i;
//     }
//     sort(divisor.begin(), divisor.end());
//     return divisor;
// }
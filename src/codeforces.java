import java.awt.*;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.util.*;

public class codeforces {
    static char[] characters = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','x','y','z'};
    //Fast I/O
    static class InputReader {
        private InputStream stream;
        private byte[] buf = new byte[1024];

        private int curChar;

        private int numChars;

        public InputReader(InputStream stream) {
            this.stream = stream;
        }

        public int read() {
            if (numChars == -1)
                throw new RuntimeException();
            if (curChar >= numChars) {
                curChar = 0;
                try {
                    numChars = stream.read(buf);
                } catch (IOException e) {
                    throw new RuntimeException();
                }
                if (numChars <= 0)
                    return -1;
            }
            return buf[curChar++];
        }

        public String readString() {
            final StringBuilder stringBuilder = new StringBuilder();
            int c = read();
            while (isSpaceChar(c))
                c = read();
            do {
                stringBuilder.append(c);
                c = read();
            } while (!isSpaceChar(c));
            return stringBuilder.toString();
        }

        public int readInt() {
            int c = read();
            while (isSpaceChar(c))
                c = read();
            int sgn = 1;
            if (c == '-') {
                sgn = -1;
                c = read();
            }
            int res = 0;
            do {
                res *= 10;
                res += c - '0';
                c = read();
            } while (!isSpaceChar(c));
            return res * sgn;
        }

        public long readLong() {
            int c = read();
            while (isSpaceChar(c))
                c = read();
            int sgn = 1;
            if (c == '-') {
                sgn = -1;
                c = read();
            }
            long res = 0;
            do {
                res *= 10;
                res += c - '0';
                c = read();
            } while (!isSpaceChar(c));
            return res * sgn;
        }

        public boolean isSpaceChar(int c) {
            return c == ' ' || c == '\n' || c == '\r' || c == '\t' || c == -1;
        }
    }

    //Methods
    static long countCubes(long a, long b) {
        return (long) (Math.floor(Math.cbrt(b)) -
                Math.ceil(Math.cbrt(a)) + 1);
    }
    private static char different(String s1, String s2, int i) {
        char check[] = {'a','b','c'};
        for(char ch: check){
            if(ch!=s1.charAt(i) && s2.charAt(i)!=ch){
                return ch;
            }
        }
        return 'z';
    }
    static long countSquares(long a, long b) {
        return (long) (Math.floor(Math.sqrt(b)) - Math.ceil(Math.sqrt(a)) + 1);
    }
    static int sumOfDigits(int n){
        int sum = 0;
        while(n!=0){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    static int findRange(int n){
        return (int) Math.pow(10,n-1);
    }
    static int sumArray(long arr[], int n){
        int sum=0;
        for(int i=0; i<n; i++){
            sum+=arr[i];
        }
        return sum;
    }
    static long countWays(long[] arr, int n, int i, long freeMinutes, int count,int recurDirect){
        if(freeMinutes==0 || i>=n) {
//            System.out.println("Here count is "+ count);
            return count;
        }
//        if(recurDirect==0){
//            System.out.println("Head->"+arr[i]);
//        }
//        if(recurDirect==1){
//            System.out.println("left->"+arr[i]+"-> free min->"+(freeMinutes-arr[i]));
//        }
//        if(recurDirect==2){
//            System.out.println("right->"+arr[i]+"-> free min->"+(freeMinutes-arr[i]));
//        }
//        if(recurDirect==0){
//            System.out.println(arr[i]);
//        }
        if(freeMinutes-arr[i]>=0) {
//            System.out.print(arr[i]+" ");
            return Math.max(countWays(arr, n, i + 1, freeMinutes - arr[i], count+1,1),
                    countWays(arr, n, i + 1, freeMinutes, count,2));
        }else{
            //we forcefully put to end
            return countWays(arr,n,i+1,0,count,0);
        }
    }
    static long[] returnPrefixArray(long[] arr, int size){
        long[] prefix = new long[size];
        long sum =0;
        for (int i = 0; i < size; i++) {
            sum+=arr[i];
            prefix[i] = sum;
        }
        return prefix;
    }
    static long gcdi(long n1, long n2){
        while (n2>0) {
            n1 %= n2;
            long temp=n2; n2=n1; n1=temp;
        }
        return n1;
    }
    private static boolean solve_subset_sum(int N, int Sum, int a[])
    {
        boolean t[][]=new boolean[N+1][Sum+1];
        for(int j=0; j<=Sum; j++)
        {
            t[0][j]=false;
        }
        for(int k=0; k<=N; k++)
        {
            t[k][0] = true;
        }
        for(int i=1; i<=N; i++)
        {
            for(int j=1; j<=Sum; j++)
            {
                if(a[i-1]<=j)
                    t[i][j] = t[i-1][j] || t[i-1][j-a[i-1]];
                else
                    t[i][j] = t[i-1][j];
            }
        }
        return t[N][Sum];
    }
    static Boolean SolveCakeIsAlie(int i, int j,int n,int m,int k, Boolean[][] dp){
      if(k==0 && i==n && j==m){
          return true;
      }
      else if(k<0|| i==n && j==m){
          return false;
      }
      else if(i>n || j>m) return false;
      else if(dp[i][j]!=null){
          return dp[i][j];
      }
      else{
          boolean flag1=SolveCakeIsAlie(i,j+1,n,m,k-i,dp);
          boolean flag2=SolveCakeIsAlie(i+1,j,n,m,k-j,dp);
          dp[i][j] =  flag1||flag2;
          return dp[i][j];
      }
    }

    //Solvers
    static void squareString(){
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int j = (s.length()/2);
        int i=0;
        while(j<s.length()){
            if(s.charAt(i++)!=s.charAt(j++)) {
                System.out.println("NO");
                return;
            }
        }
        System.out.println("YES");
    }
    static void solveSquareString(){
        Scanner sc = new Scanner(System.in);
        long j=1;
        ArrayList<Long> check = new ArrayList<>();
        for(int i=1; i<32; i++){
            j= (long) Math.pow(i,6);
            check.add(j);
        }
        int t = sc.nextInt();
        while(t-->0){
            long n=sc.nextLong();
            long countSq = countSquares(1,n);
            long countCu = countCubes(1,n);
            long sum = countCu+countSq;
            int double_count = 0;
            while(double_count< check.size() && check.get(double_count)<=n) double_count++;
            System.out.println(sum-double_count);
        }
    }
    static void solveWrongAddition(){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            String a = sc.next();
            String c = sc.next();

            int i=a.length()-1;
            int j=c.length()-1;

            StringBuilder stringBuilder = new StringBuilder();
            boolean flag =false;
            while(i>=0 && j>=0){
                int iVal = Integer.parseInt(String.valueOf(a.charAt(i)));
                int jVal = Integer.parseInt(String.valueOf(c.charAt(j)));
                if(iVal<=jVal){
                    //1 digit
                    int x = jVal-iVal;
                    stringBuilder.append(x);
                }
                else{
                    //2 digit
                    if(j==0){
                        flag=true;
                        break;
                    }
                    j--;
                    jVal = Integer.parseInt(c.substring(j,j+2));
                    int x = jVal-iVal;
                    if(x>9 || x<0){
                        flag=true;
                        break;
                    }
                    stringBuilder.append(x);
                }
                i--;
                j--;
            }
            if(i>=0 || flag){
                System.out.println(-1);
                continue;
            }
            //append remaining characters of s to b
            while(j>=0){
                stringBuilder.append(c.charAt(j--));
            }
            i=0;
            //checking if we have b[i]=0 because we want the characters of b
            // form 0 to onwards
            stringBuilder.reverse();
            while(i<stringBuilder.length()){
                if(stringBuilder.charAt(i)!='0') break;
                i++;
            }
            //we dont want 0 so we start with forward
            System.out.println(stringBuilder.substring(i));
        }
    }
    static void AandBCompilationErrors(){
        Scanner sc  = new Scanner(System.in);
        int n =sc.nextInt();
        int a=0,b=0,c=0;
        for(int i=0; i<n; i++){
            a+=sc.nextInt();
        }
        for(int i=0; i<n-1; i++){
            b+=sc.nextInt();
        }
        for(int i=0; i<n-2; i++){
            c+=sc.nextInt();
        }
        System.out.println(a-b);
        System.out.println(b-c);
    }
    static void llyaAndQueries() throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        String s = st.nextToken();
        char[] c = s.toCharArray();
        int m = Integer.parseInt(br.readLine());

        int prefixSum[] = new int[c.length];
        int sum=0;
        for(int i=1; i<c.length; i++){
            if(c[i]==c[i-1]){
                prefixSum[i]=++sum;
            }
        }
        int l,r;
        while (m-->0){
            st = new StringTokenizer(br.readLine());
            l=Integer.parseInt(st.nextToken());
            r=Integer.parseInt(st.nextToken());
            if(l!=1){
                System.out.println(prefixSum[r-1]-prefixSum[l-1]);
            }
            else{
                System.out.println(prefixSum[r-1]);
            }
        }
    }
    static void fence(){
        Scanner sc  = new Scanner(System.in);
        int n =sc.nextInt();
        int k =sc.nextInt();

        int[] h = new int[n];

        for(int i=0; i<n; i++) {
            h[i] = sc.nextInt();
        }
        int sum = 0;
        for(int i=0; i<k; i++){
            sum+=h[i];
        }
        int min=sum;
        int idx=1;
        //for every segment we just calculate the sum
        //learning (n-k)
        for(int i=1; i<=(n-k); i++){
            //we will reduce the previous
            sum-=h[i-1];
            //we will introduce the new sum
            sum+=h[i+k-1];
            if(min>sum){
                min=sum;
                //we will update that index
                idx=i+1;
            }

        }
        System.out.println(idx);
    }
    static boolean sortArray(){
        Scanner scanner = new Scanner(System.in);
        int n= scanner.nextInt();
        int[] a = new int[n];
        for(int i=0; i<n; i++){
            a[i]=scanner.nextInt();
        }
        int plusC=0;
        int minC=0;
        for(int i=1; i<n; i++){
            if(a[i]>=a[i-1]){
                plusC++;
            }
            else {
                minC++;
            }
        }
        if(Math.abs(plusC-minC)>0){
            return true;
        }
        return false;
    }
    static int worms(){
        Scanner scanner = new Scanner(System.in);
        ArrayList<Point> p = new ArrayList<>();
        int n= scanner.nextInt();
        int[] a = new int[n];
        int prevX=0;
        int number=0;
        for(int i=0; i<n; i++){
            a[i]=scanner.nextInt();
            if(i==0){
                p.add(new Point(1,a[i]));
            }
            else{
                p.add(new Point(prevX, (prevX-1)+a[i]));
            }
            prevX=a[i]+1;
        }
        int m= scanner.nextInt();
        int[] b = new int[m];
        for(int i=0; i<m; i++){
            b[i]=scanner.nextInt();
        }
        int pileN=1;
        for(Integer i: b){
            for(Point j: p){
                if(i>=j.x && i<=j.y){
                    System.out.println(pileN);
                    break;
                }
            }
            pileN++;
        }
        return 1;
    }
    static void bersuBall() throws IOException {
        InputReader r = new InputReader(System.in);
        int n =r.readInt();
        int[] a = new int[n];
        for(int i=0; i<n; i++){
            a[i]=r.readInt();
        }
        int m =r.readInt();
        int[] b = new int[m];
        for(int i=0; i<m; i++){
            b[i] = r.readInt();
        }
        Arrays.sort(a);
        Arrays.sort(b);

        //logic
        int i=0, j=0;
        int count=0;
        while((i<n && j<m)){
            if(Math.abs(a[i]-b[j])<=1)
            {
                j++;
                i++;
                count++;
            }
            else if(a[i]>b[j]) {
                j++;
            }
            else{
                i++;
            }
        }
        System.out.println(count);
    }
    static void lengthAndSum(){
        InputReader sc = new InputReader(System.in);
        int m=sc.readInt();
        int s=sc.readInt();
        if(s==0){
            if(m==1){
                System.out.println("0  0");
                return;
            }
            else{
                System.out.println("-1  -1");
                return;
            }
        }
        StringBuilder maxi = new StringBuilder();
        StringBuilder mini = new StringBuilder();
        for(int i=0; i<m; i++){
            //we every time provide k
            int k = Math.min(9,s);
            //we push the max number in the string
            maxi.append(k);
            //and we decrease s
            s-=k;
        }
        //if s is still greater then 0
        if(s>0){
            // like 9 9 but we have 27
            System.out.println("-1 -1");
            return;
        }
        //for finding minimum
        for(int i=m-1; i>=0; i--){
            mini.append(maxi.charAt(i));
        }
        int j=0;
        //then we find out the left most not zero number
        boolean flag = true;
        while(mini.charAt(j)=='0'){
            j++;
            flag=false;
        }
        if(!flag) {
            mini.setCharAt(0, (char) (mini.charAt(0)+1));
            mini.setCharAt(j,(char)(mini.charAt(j)-1));
        }
        System.out.println(mini+" "+maxi);
    }
    static void kthNotDivisible() {
        InputReader sc = new InputReader(System.in);
        int t =sc.readInt();
//        final long startTime = System.nanoTime();
        while(t-->0){
            long n =sc.readLong();
            long k =sc.readLong();
            long kth = k+(k/(n-1));
            if(kth%n==0) System.out.println(kth-1);
            else System.out.println(kth);
        }
//        final long duration = System.nanoTime() - startTime;
//        System.out.println("Seconds Elapsed = "+duration/1000000000);
    }
    static void divideAndMultiply() throws IOException {
        InputReader sc =new InputReader(System.in);
        int t = sc.readInt();
        while(t-->0){
            int n = sc.readInt();
            long[] arr = new long[n];
            for(int i=0; i<n; i++){
                arr[i]= sc.readInt();
            }
            int twoCount=0;
            //take out 2's from it
            for(int i=0; i<n; i++){
                while(arr[i]%2==0) {
                    arr[i]/=2;
                    twoCount++;
                }
            }
            Arrays.sort(arr);
            //now put all two in last
            for(int i=0; i<twoCount; i++){
                arr[n-1]*=2;
            }
            System.out.println(sumArray(arr,arr.length));
        }
    }
    static int maxIdxEven(int arr[], int n, boolean flag, int mx) {
        if (flag) {
            //we need 1st max
            int mxIdx = 0;
            int maxElement = 0;
            for (int i = 0; i < n; i++) {
                if (arr[i] != 1) {
                    if (arr[i] % 2 == 0) {
                        if (maxElement < arr[i]) {
                            maxElement = arr[i];
                            mxIdx = i;
                        }
                    }
                }
            }

            return mxIdx;
        } else {
            int mxIdx = -1;
            int maxElement = 0;
            for (int i = 0; i < n; i++) {
                if (arr[i] != 1) {
                    if (i != mx) {
                        if (arr[i] % 2 == 0) {
                            if (maxElement < arr[i] || maxElement % 2 == 1) {
                                maxElement = arr[i];
                                mxIdx = i;
                            }
                        } else {
//                            if (mxIdx == -1) {
                            //we have not seen previous even
                            if (maxElement < arr[i]) {
                                maxElement = arr[i];
                                mxIdx = i;
                            }
//                            }
                        }
                    }
                }
            }
            return mxIdx;

        }
    }
    static void books(){
        InputReader ip = new InputReader(System.in);
        int n = ip.readInt();
        int t = ip.readInt();
        long[] arr = new long[n];
        for(int i=0; i<n; i++){
            arr[i] = ip.readLong();
        }
        int r=0;
        int sm=0;
        int ans=0;
        for (int i = 0; i < n; ++i) {
            while (r < n && sm + arr[r] <= t) {
                sm += arr[r];
                ++r;
            }
            ans = Math.max(ans, r - i);
            sm -= arr[i];
        }
        System.out.println(ans);
    }
    static void copycopycopycopy(){
        InputReader sc =new InputReader(System.in);
        int t = sc.readInt();
        while(t-->0){
            int n = sc.readInt();
            Set<Long> set = new TreeSet<>();
            for(int i=0; i<n; i++){
                set.add( sc.readLong());
            }
            System.out.println(set.size());
        }
    }

    static void marinaVasya(){
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        int t=n-sc.nextInt();
        String s1 = sc.next();
        String s2 = sc.next();
          int countSame=0;
          for(int i=0; i<n; i++){
              if(s1.charAt(i)==s2.charAt(i)) countSame++;
          }

          int same, diff;
          if(t<countSame){
              same=t;
              diff=0;
          }
          else if(t==countSame){
              same=t;
              diff=0;
          }
          else{
              same=countSame;
              diff = (t-same)*2;
              if(n-countSame<diff){
                  System.out.println(-1);
                  return;
              }
          }
          char[] ans = new char[n];
          for(int i=0; i<n; i++){
              if(s1.charAt(i)==s2.charAt(i)){
                  if(same>0){
                      ans[i] = s1.charAt(i);
                      same--;
                  }
                  else{
                      ans[i] = different(s1,s2,i);
                  }
              }
              else{
                  //different
                  if(diff>0){
                      ans[i] = s1.charAt(i);
                      //toggling strings
                      String tmp = s1; s1=s2; s2=tmp;
                      diff--;
                  }
                  else{
                      ans[i] = different(s1,s2,i);
                  }
              }
          }
        System.out.println(new String(ans));
    }

    static void omkarAndLastMath() {
        InputReader sc = new InputReader(System.in);
        int t = sc.readInt();
        while (t-- > 0) {
            long n = sc.readLong();
            if(n%2==0){
                System.out.println(n/2+" "+n/2);
            }
            else{
                for(long i=2; i*i<=n; i++){
                    if(n%i==0){
                        System.out.println(n/i+" "+(n-(n/i)));
                        return;
                    }
                }
                System.out.println("1 "+(n-1));
            }
        }
    }

    static void fairDivision(){
        InputReader sc = new InputReader(System.in);
        int t = sc.readInt();
        while (t-- > 0) {
            int n=sc.readInt(); int[] arr = new int[n]; int sum=0;
            for(int i=0; i<n; i++) { arr[i]=sc.readInt(); sum+=arr[i]; }
            if(sum%2!=0 ) System.out.println("NO");
            else{
               if(solve_subset_sum(n,sum/2,arr)) System.out.println("YES");
               else System.out.println("NO");
            }
        }
    }

    static void NumberOfWays(){
        InputReader sc = new InputReader(System.in);
        int n=sc.readInt(); int[] arr = new int[n]; int sum=0;
        for(int i=0; i<n; i++) { arr[i]=sc.readInt(); sum+=arr[i]; }
        if(n%3!=0) System.out.println(0);
        else if(sum==0) System.out.println(1);
        
    }

    static void cakeIsALie(){

        InputReader sc = new InputReader(System.in);
        int t=sc.readInt();
        while (t-->0) {
            int n = sc.readInt();
            int m = sc.readInt();
            int k = sc.readInt();
            Boolean[][] dp = new Boolean[n+1][m+1];
            if (SolveCakeIsAlie(1, 1, n, m, k,dp)) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
    //wrong
    static void constructRectangle(){
        InputReader ir = new InputReader(System.in);
        int t = ir.readInt();
        while(t-->0){
            long l1=ir.readInt();
            long l2=ir.readInt();
            long l3=ir.readInt();
            long max = Math.max(l1,Math.max(l2,l3));
            boolean flag=false;
            if(l1 + l2 == l3  || l1==l2){
                if(l3%2==0) {
                    System.out.println("YES");
                }
                else{
                    System.out.println("NO");
                }
            }
            else if(l2+l3==l1 || l2==l3){
                if(l1%2==0) {
                    System.out.println("YES");
                }
                else{
                    System.out.println("NO");
                }
            }
            else if(l3+l1==l2 || l3==l1){
                if(l2%2==0) {
                    System.out.println("YES");
                }
                else{
                    System.out.println("NO");
                }
            }
            else{
                System.out.println("NO");
            }
        }
    }
    static void giftFixing() {
        InputReader sc = new InputReader(System.in);
        int t = sc.readInt();
        while (t-- > 0) {
            int n = sc.readInt();
            long[] a = new long[n];
            long[] b = new long[n];
            long min_a = Long.MAX_VALUE;
            long min_b =  Long.MAX_VALUE;
            for (int i = 0; i < n; i++) {
                a[i] = sc.readInt();
                min_a=Math.min(min_a,a[i]);
            }
            for (int i = 0; i < n; i++) {
                b[i] = sc.readInt();
                min_b=Math.min(min_b,b[i]);
            }
            long count=0;
            long d1,d2;
            for(int i=0; i<n; i++){
                d1=a[i]-min_a;
                d2=b[i]-min_b;
                count+=Math.max(d1,d2);
            }
            System.out.println(count);
        }
    }
    static void integerDiversity(){
        InputReader sc = new InputReader(System.in);
        int t = sc.readInt();
        while (t-- > 0) {
            int n = sc.readInt();
            long[] arr = new long[n];
            Map<Long,Long> map = new HashMap<>();
            for (int i = 0; i < n; i++) {
                arr[i] = sc.readInt();
                if(map.containsKey(arr[i])){
                    map.put(arr[i],map.get(arr[i])+1);
                }
                else{
                    map.put(arr[i],1L);
                }
            }
            int ans=0;
            if(n==map.size() || map.size()==n/2 && map.size()%2==0){
                ans=n;
            }
            else if(map.size()%2!=0 && map.size()==n/2){
                ans=n/2;
            }
            else{
                for (Map.Entry<Long,Long> entry : map.entrySet()){
                    if((map.containsKey((-1)*entry.getKey()) && map.containsKey(entry.getKey())) && entry.getValue()!=0){
                        //if we have values in negative  -1 1 1
                        ans+=2;
                        map.put((-1)*entry.getKey(),0L);
                        map.put(entry.getKey(), 0L);
                    }
                    else if( entry.getValue()!=0 && entry.getValue()>=1 ) {
                        ans++;
                    }
                }
            }
            System.out.println(ans);
        }
    }
    public static void main(String[] args) throws IOException{
         cakeIsALie();
    }
}

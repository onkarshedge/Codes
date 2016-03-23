import java.util.Scanner;

/**
 * Created by onkar on 5/3/16.
 */
public class SolutionA {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String s=sc.next();
        int x=0,y=0;
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='N')
                y++;
            else if(s.charAt(i)=='S')
                y--;
            else if(s.charAt(i)=='E')
                x++;
            else if(s.charAt(i)=='W')
                x--;
        }
        StringBuilder ans=new StringBuilder();
        int x1=0,y1=0;
        if(x>=0){
            while(x1!=x){
                ans.append("E");
                x1++;
            }
            if(y>0){
                while(y1!=y){
                    ans.append("N");
                    y1++;
                }
            }
            else{
                while(y1!=y){
                    ans.append("S");
                    y1--;
                }
            }
        }
        else{
            if(y>0){
                while(y1!=y){
                    ans.append("N");
                    y1++;
                }
            }
            else{
                while(y1!=y){
                    ans.append("S");
                    y1--;
                }
            }
            while(x1!=x){
                ans.append("W");
                x1--;
            }

        }
        System.out.println(ans.toString());
    }
}

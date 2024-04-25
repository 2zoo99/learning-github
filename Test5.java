class Parent{
	public int compute(int num){
    	if(num <=1) return num;
        return compute(num-1) + compute(num-2);
    }
 }
 
 class Child extends Parent {
 	public int compute(int num){
    	if(num<=1) return num;
        	return compute(num-1) + compute(num-3);
        }
   }
   
  class Test5{
  	public static void main (String[] args){
    Parent obj = new Child();
    System.out.println(obj.compute(4));

    int a=2, b=3, c=2, d=4;
    System.out.println(a==b); //false
    System.out.println(a==c); //true
   }
}
/*class Instance
{
	int intField;
	float floatField;
	Object obj;
}
class InstanceVar
{
	public  static void main(String[] args)
	{
		Instance iv = new Instance();
		System.out.println(iv.obj);

	}
}*/

///////////////////////////////////////////////////////////////////////
class InstancneVar {
	/*int instanceVarInt=10;
	float instanceVarFloatWithDefaultValue;
*/
	InstancneVar()
	{
		instanceVarFloatWithDefaultValue=10.01f;
	}

	void print()
	{
		System.out.println(instanceVarFloatWithDefaultValue+instanceVarInt);
	}	
	public static void main(String args[])
	{	
		InstancneVar varObj = new InstancneVar();

		/*System.out.println(instanceVarFloatWithDefaultValue+instanceVarInt);
		This Give Error
		InstancneVar.java:34: error: non-static variable instanceVarInt 
		cannot be referenced from a static context
		System.out.println(instanceVarFloatWithDefaultValue+instanceVarInt);
		*/


		varObj.print();
	}
		int instanceVarInt=10;
	float instanceVarFloatWithDefaultValue;
}

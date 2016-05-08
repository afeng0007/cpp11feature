namespace A{
	int i;
}

namespace B {
	int i;
	int j;
	namespace C {
		namespace D {
			using namespace A;
			int j;
			int k;
			int a = i;
		}
		using namespace D;
		int k = 89;
		int l = k;
		int m = i;
		int n = j;
	}
}
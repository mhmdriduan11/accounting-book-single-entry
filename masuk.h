#include "informasi.h"

namespace Masuk {
	namespace Saldo {
		class User : public Informasi::Saldo::User{
			public:	
				User() = default ;
				void addMoney(long long money){
					Informasi::Saldo::User::status(money, "masuk");
				}
		};
	}
}
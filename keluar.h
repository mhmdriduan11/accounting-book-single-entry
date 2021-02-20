#include "masuk.h"

namespace Keluar {
	namespace Saldo {
		class User : public Masuk::Saldo::User{
			public:
				User() = default ;
				void sendMoney(long long money){
					Informasi::Saldo::User::status(money,"keluar");
				}
		};
	}
}
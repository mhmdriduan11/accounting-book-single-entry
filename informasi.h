#include <iostream>
using namespace std ;

namespace Informasi {
	namespace Saldo {
		class User {
		private:
			long long money{},max_penyimpanan{};	
			public:
				User(){this->max_penyimpanan = 100000 ; };
				long long saldo_penyimpanan(long long penyimpanan){
					this->max_penyimpanan = penyimpanan ;
					return this->max_penyimpanan ;
				}

				long long status(long long money, string state){
					long long then{};
					if (state == "masuk"){

						then = this->money + money ;
						if (then >= this->max_penyimpanan || money < 0)
						{
							cout << "Failed: 'Terjadi kendala pada Penyimpanan.' " << endl ;
						}else{
							this->money = then ;
							cout << "Status: 'Transaksi Berhasil.' " << endl ;
						}

					}else if (state == "keluar")
					{
						then = this->money - money ;
						if (then < 0 ||money == 0)
						{
							cout << "Failed: 'Terjadi kendala pada Penyimpanan.' " << endl ;
						}else{
							this->money = then ;
							cout << "Status: 'Transaksi Berhasil.' " << endl ;
						}
					}

					return this->money ;
				}

				void cetak_info_saldo(){
					cout << "=====) Saldo Tabungan (=====" << endl << "  " << this->money << endl ;
				}
			};
	};
}
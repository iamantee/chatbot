
namespace math{ namespace calculation {

class Numeric_Calculation {
	private:
		
	public:
		template<typename T>
		static T add(T number_1, T number_2) {
			return  number_1 + number_2;
		}
		
		
		template<typename T>
		static T multiply(T number_1, T number_2) {
			return  number_1 * number_2;
		}
		
		/*
		template<typename T>
		static T divide(T number_1, T number_2) {
			return  number_1 / number_2;
		}
		*/
		
		
}; // class Calculation

} // namespace calculation 
} // namespace math
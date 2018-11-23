#include <vector>

namespace math{ namespace vector {

typedef enum vector_type{ ROW, COLUMN } vector_type;

template<typename T>
class Vector {
	private:
		int _element_count;
		std::vector<T> _data;
		vector_type _vector_type = ROW;
		
	public:
	
		/** Constructor
        */
        Vector() = default;
		
		/** Constructor
            @param element_count

            @note This constructor 
        */
		Vector(int element_count): _element_count(element_count)
        {
			_data.resize(element_count);
        }
		
		/** Constructor
            @param data

            @note This constructor 
        */
		Vector(std::vector<T> data): _element_count(data.size()), _data(data){}
		
		/** Constructor
            @param element_count
            @param data

            @note This constructor 
        */
		Vector(int element_count, std::vector data): _element_count(element_count), _data(data){}
		
		
		/** Function 

            @note This function is to get the data in the vector 
        */
		std::vector<T> get_data() {
			return _data;
		}
		
		/** Function 

            @note This function is to determine whether the vector is row 
        */
		bool is_row() {
			bool is_row = true;
			
			switch(_vector_type) {
				case ROW: 
					is_row = true;
					break;
				case COLUMN: 
					is_row = false; 
					break;
				default:
					break;
			}
			
			return is_row;
		}
		
		/** Function 

            @note This function is to transpose vector 
        */
		void transpose() {
			switch(_vector_type) {
				case ROW: 
					_vector_type = COLUMN; 
					break;
				case COLUMN: 
					_vector_type = ROW; 
					break;
				default:
					break;
			}
		}
		
		/** Function 

            @note This function is to transpose vector 
        */
		template<typename ELEMEMT_T, typename RESULT_T>
		static RESULT_T transpose(std::vector<ELEMEMT_T> vector_1, std::vector<ELEMEMT_T> vector_2) {
			RESULT_T 
			
			if(vector_1.is_row() && vector_2.is_row() == false) {
				for(int i=0;i<vector_1.size();i++) {
					
				}
			} else {
				
			}				
		}
		
}; // class Vector

} // namespace vector 
} // namespace math
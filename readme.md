### Báo cáo học Array
### **1.Mảng**  
- Ngôn ngữ lập trình C cung cấp cấu trúc dữ liệu gọi là mảng, được lưu trữ trong một tập hợp các dữ liệu cùng kiểu với độ dài cố định.  
- Tất cả mảng đều bao gồm các vị trí nhớ liền kề nhau. Địa chỉ thấp nhất tương ứng với thành viên đầu tiền và địa chỉ cao nhất tương ứng với thành viên cuối cùng của mảng.  
#### **Khai báo và sử dụng mảng**  
- Cú pháp khai báo: ```<kiểu dữ liệu><tên mảng>[<số lượng phần tử>];```
    - Kiểu dữ liệu của mảng sẽ quy định kiểu dữ liệu của các phần tử có trong mảng.
    - Tên mảng được đặt tên theo quy tắc đặt tên biến trong C/C++  
    -  số lượng phần tử phải là 1 HẰNG SỐ.  
### **2.Mảng 1 chiều**  
- Khai báo: VD: ```int array[n];```  
    - Trong đó, tên của mảng là *array* sẽ có thể chứa được n giá trị của kiểu cơ bản *int*. 
    - Trong thực hành, phần bộ nhớ cho n giá trị nguyên này được để dành riêng và được gán cho mảng này (mặc dù giá trị của các phần tử trong mảng chưa được xác định).   
    - Biến array thực chất là một kiểu tham chiếu của kiểu nguyên; nó khởi thủy sẽ chỉ tới địa chỉ của giá trị đầu tiên trong mảng.  
- Truy cập các phần tử:  
    - Một cách để truy cập đến các phần tử này là dùng đến cặp kí tự ngoặc vuông dạng [k]. Trong đó k là chỉ số (hay vị trí thứ tự đếm từ 0). Như vậy, phần tử thứ k trong mảng array sẽ có cú pháp    
    ``` array[k]```  

    - Giá trị trả về của array[k] chính là giá trị mà nó chứa ở vị trí k. Thoạt nhìn thì cú pháp của việc truy cập này trông giống như cú pháp khi mảng array được khai báo nhưng về chức năng thì hoàn toàn khác nhau.  
    - Một cách truy cập khác là dùng con trỏ số học để tham chiếu đến giá trị của các phần tử trong mảng.
Bảng sau đây sẽ minh họa cách dùng của cả hai phương pháp:  

| Vị trí phần tử    | 0         | 1             | 2             | n             |
|------------------ |---------- |------------   |------------   |------------   |
| Kiểu dùng cơ bản  | array[0]  | array[1]      | array[2]      | array[n]      |
| Dùng con trỏ      | *array    | *(array+1)    | *(array+2)    | *(array+n)    |
|                   |           |               |               |               |  
 
### **3.Mảng 2 chiều**  
- Khai báo: ```int array2D[số_hàng][số_cột];```  
    - chiều thứ nhất có ```số_hàng``` phần tử  
    -  Chiều thứ hai sẽ có ```số_hàng * số_cột``` các phần tử -- một tập hợp của số_cột các phần tử mà mỗi phần tử là một chiều thứ nhất. 
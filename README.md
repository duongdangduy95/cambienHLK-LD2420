#  Dự án cảm biến radar HLK-LD2420 với Arduino

Dự án này sử dụng **cảm biến radar 24GHz HLK-LD2420** để phát hiện **chuyển động (motion)** và **vi chuyển động (micromotion)** như việc **đứng yên** trong vùng quét. Cảm biến được kết nối với **Arduino UNO** để đọc và hiển thị trạng thái qua cổng **Serial Monitor**.

---

##  Mục tiêu

- Kết nối và sử dụng cảm biến HLK-LD2420
- Đọc trạng thái OT1 (micromotion) và OT2 (motion)
- In trạng thái người vào Serial Monitor

---

## Giới thiệu về cảm biến HLK-LD2420
Cảm biến HLK-LD2420 là cảm biến radar sóng milimet 24GHz có khả năng phát hiện:

Chuyển động (Motion): như đi lại, di chuyển tay chân,...

Vi chuyển động (Micromotion): như thở, nhịp tim, đứng yên không di chuyển.


Công nghệ radar sóng milimet: cho độ nhạy cao và hoạt động ổn định trong nhiều môi trường.

Không bị ảnh hưởng bởi ánh sáng, khói, nhiệt độ, v.v.

Phát hiện người qua hai tín hiệu độc lập:

OT1: vi chuyển động (đứng yên)

OT2: chuyển động lớn (đi lại, cử động)

Tầm phát hiện: 0.2m đến 6–9m (có thể cấu hình qua UART)

Góc phát hiện: lên đến 120°

Giao tiếp UART: dùng để cấu hình nâng cao (ví dụ: điều chỉnh vùng quét, độ nhạy, độ trễ,...)
---

## ⚡ Sơ đồ kết nối

| HLK-LD2420 | Arduino UNO |
|------------|-------------|
| VCC        | 5V          |
| GND        | GND         |
| OT1        | D6          |
| OT2        | D7          |


> **Lưu ý**: HLK-LD2420 không có TX, chỉ có RX để cấu hình bằng lệnh UART nếu cần.

---

##  Giải thích hoạt động

- **OT1 (Micromotion)**: HIGH khi có người **đứng yên**
- **OT2 (Motion)**: HIGH khi có người **đang di chuyển**
- Khi cả hai LOW: **Không có ai trong vùng cảm biến**

---
## Link video demo
https://youtu.be/wEwIxfc8QyI


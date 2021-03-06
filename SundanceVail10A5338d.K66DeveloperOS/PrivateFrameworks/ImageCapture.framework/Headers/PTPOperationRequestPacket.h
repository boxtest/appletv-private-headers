/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library


@interface PTPOperationRequestPacket : NSObject {
	int _numParameters;	// 4 = 0x4
	unsigned long _dataPhaseInfo;	// 8 = 0x8
	unsigned short _operationCode;	// 12 = 0xc
	unsigned long _transactionID;	// 16 = 0x10
	unsigned long _parameters[5];	// 20 = 0x14
}
@property(assign) unsigned long dataPhaseInfo;	// G=0x33e5ef6d; S=0x33e5ef7d; converted property
@property(readonly, assign) int numParameters;	// G=0x33e5ef8d; converted property
@property(assign) unsigned short operationCode;	// G=0x33e5ef2d; S=0x33e5ef3d; converted property
@property(assign) unsigned long parameter1;	// G=0x33e5efd5; S=0x33e5efe5; converted property
@property(assign) unsigned long parameter2;	// G=0x33e5eff5; S=0x33e5f009; converted property
@property(assign) unsigned long parameter3;	// G=0x33e5f01d; S=0x33e5f031; converted property
@property(assign) unsigned long parameter4;	// G=0x33e5f045; S=0x33e5f059; converted property
@property(assign) unsigned long parameter5;	// G=0x33e5f06d; S=0x33e5f081; converted property
@property(assign) unsigned long transactionID;	// G=0x33e5ef4d; S=0x33e5ef5d; converted property
- (id)initWithOperationCode:(unsigned short)operationCode transactionID:(unsigned long)anId dataPhaseInfo:(unsigned long)info;	// 0x33e5e675
- (id)initWithOperationCode:(unsigned short)operationCode transactionID:(unsigned long)anId dataPhaseInfo:(unsigned long)info numParameters:(unsigned long)parameters parameters:(unsigned *)parameters5;	// 0x33e5e5e1
- (id)initWithOperationCode:(unsigned short)operationCode transactionID:(unsigned long)anId dataPhaseInfo:(unsigned long)info parameter1:(unsigned long)a1;	// 0x33e5e6e5
- (id)initWithOperationCode:(unsigned short)operationCode transactionID:(unsigned long)anId dataPhaseInfo:(unsigned long)info parameter1:(unsigned long)a1 parameter2:(unsigned long)a2;	// 0x33e5e769
- (id)initWithOperationCode:(unsigned short)operationCode transactionID:(unsigned long)anId dataPhaseInfo:(unsigned long)info parameter1:(unsigned long)a1 parameter2:(unsigned long)a2 parameter3:(unsigned long)a3;	// 0x33e5e7f5
- (id)initWithOperationCode:(unsigned short)operationCode transactionID:(unsigned long)anId dataPhaseInfo:(unsigned long)info parameter1:(unsigned long)a1 parameter2:(unsigned long)a2 parameter3:(unsigned long)a3 parameter4:(unsigned long)a4;	// 0x33e5e88d
- (id)initWithOperationCode:(unsigned short)operationCode transactionID:(unsigned long)anId dataPhaseInfo:(unsigned long)info parameter1:(unsigned long)a1 parameter2:(unsigned long)a2 parameter3:(unsigned long)a3 parameter4:(unsigned long)a4 parameter5:(unsigned long)a5;	// 0x33e5e925
- (id)initWithTCPBuffer:(void *)tcpbuffer;	// 0x33e5e9cd
- (id)initWithUSBBuffer:(void *)usbbuffer;	// 0x33e5eab5
- (id)contentForTCP;	// 0x33e5eb95
- (id)contentForUSB;	// 0x33e5ec8d
- (id)contentForUSBUsingBuffer:(void *)usbusingBuffer capacity:(unsigned long)capacity;	// 0x33e5ed71
// converted property getter: - (unsigned long)dataPhaseInfo;	// 0x33e5ef6d
- (id)description;	// 0x33e5ee51
// converted property getter: - (int)numParameters;	// 0x33e5ef8d
// converted property getter: - (unsigned short)operationCode;	// 0x33e5ef2d
// converted property getter: - (unsigned long)parameter1;	// 0x33e5efd5
// converted property getter: - (unsigned long)parameter2;	// 0x33e5eff5
// converted property getter: - (unsigned long)parameter3;	// 0x33e5f01d
// converted property getter: - (unsigned long)parameter4;	// 0x33e5f045
// converted property getter: - (unsigned long)parameter5;	// 0x33e5f06d
- (unsigned long)parameterAtIndex:(unsigned long)index;	// 0x33e5ef9d
// converted property setter: - (void)setDataPhaseInfo:(unsigned long)info;	// 0x33e5ef7d
// converted property setter: - (void)setOperationCode:(unsigned short)code;	// 0x33e5ef3d
// converted property setter: - (void)setParameter1:(unsigned long)a1;	// 0x33e5efe5
// converted property setter: - (void)setParameter2:(unsigned long)a2;	// 0x33e5f009
// converted property setter: - (void)setParameter3:(unsigned long)a3;	// 0x33e5f031
// converted property setter: - (void)setParameter4:(unsigned long)a4;	// 0x33e5f059
// converted property setter: - (void)setParameter5:(unsigned long)a5;	// 0x33e5f081
- (void)setPparameter:(unsigned long)pparameter atIndex:(unsigned long)index;	// 0x33e5efb9
// converted property setter: - (void)setTransactionID:(unsigned long)anId;	// 0x33e5ef5d
// converted property getter: - (unsigned long)transactionID;	// 0x33e5ef4d
@end


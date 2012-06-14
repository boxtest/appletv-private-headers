/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

#import "CBPeripheralManager.h"
#import "CBXpcConnectionDelegate.h"

@class CBXpcConnection, NSMutableDictionary, NSMutableArray;

@interface CBConcretePeripheralManager : CBPeripheralManager <CBXpcConnectionDelegate> {
@private
	CBXpcConnection *_connection;	// 16 = 0x10
	NSMutableArray *_services;	// 20 = 0x14
	NSMutableDictionary *_characteristicIDs;	// 24 = 0x18
}
- (id)initWithDelegate:(id)delegate queue:(id)queue;	// 0x34abed51
- (void)addService:(id)service;	// 0x34abf001
- (id)createCentralFromArgs:(id)args;	// 0x34ac02c9
- (void)dealloc;	// 0x34abee45
- (void)handleAdvertisingStarted:(id)started;	// 0x34ac11b5
- (void)handleCentralConnected:(id)connected;	// 0x34ac12a1
- (void)handleCentralDisconnected:(id)disconnected;	// 0x34ac1321
- (void)handleGetAttributeValue:(id)value;	// 0x34ac0735
- (void)handleNotificationAdded:(id)added;	// 0x34ac0e65
- (void)handleNotificationRemoved:(id)removed;	// 0x34ac1015
- (void)handleServiceAdded:(id)added;	// 0x34ac036d
- (void)handleSetAttributeValues:(id)values;	// 0x34ac0979
- (void)handleStateUpdated:(id)updated;	// 0x34ac13a1
- (void)removeAllServices;	// 0x34abfe55
- (void)removeService:(id)service;	// 0x34abf8c1
- (void)respondToRequest:(id)request withResult:(int)result;	// 0x34abff49
- (void)setDesiredConnectionLatency:(int)latency forCentral:(id)central;	// 0x34abeecd
- (void)startAdvertising:(id)advertising;	// 0x34abef59
- (void)stopAdvertising;	// 0x34abefc1
- (void)updateValue:(id)value forCharacteristic:(id)characteristic onSubscribedCentrals:(id)centrals;	// 0x34ac0109
- (void)xpcConnection:(id)connection didReceiveMessage:(int)message arguments:(id)arguments;	// 0x34ac140d
- (void)xpcConnectionDidReset:(id)xpcConnection;	// 0x34ac14b9
@end

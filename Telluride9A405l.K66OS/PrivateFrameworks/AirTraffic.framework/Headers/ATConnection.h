/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <NSObject.h> // Unknown library

@class ATXPCConnection;
@protocol ATConnectionDelegate;

@interface ATConnection : NSObject {
	ATXPCConnection *_connection;	// 4 = 0x4
	NSObject<ATConnectionDelegate> *_delegate;	// 8 = 0x8
	BOOL _registerForStatus;	// 12 = 0xc
	int _atcRunningToken;	// 16 = 0x10
	BOOL _atcRunning;	// 20 = 0x14
}
@property(retain, nonatomic) NSObject<ATConnectionDelegate> *delegate;	// G=0x350effa1; S=0x350effb1; @synthesize=_delegate
- (id)init;	// 0x350efb89
- (id)_connection;	// 0x350ef225
- (void)_handleMessage:(id)message;	// 0x350ef01d
- (void)_resetConnection;	// 0x350ef0b9
- (void)_sendMessage:(id)message info:(id)info reply:(id)reply;	// 0x350ef465
- (void)_setRegisterForStatus:(BOOL)status;	// 0x350ef579
- (void)cancelSync;	// 0x350ef735
- (void)clearSyncData;	// 0x350ef7ad
- (void)dataMigrationFinished;	// 0x350ef7d9
- (void)dealloc;	// 0x350efec5
// declared property getter: - (id)delegate;	// 0x350effa1
- (BOOL)isSyncing:(BOOL *)syncing automatically:(BOOL *)automatically wirelessly:(BOOL *)wirelessly;	// 0x350ef831
- (void)lowBatteryNotification;	// 0x350ef805
- (void)registerForStatus;	// 0x350ef675
- (void)requestSyncForLibrary:(id)library;	// 0x350ef69d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x350effb1
- (void)unregisterForStatus;	// 0x350ef689
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUI.framework/AccessibilityUI
 */

#import <NSObject.h> // Unknown library

@class NSString;
@protocol OS_xpc_object;

@interface AXUIClient : NSObject {
	NSString *_identifier;	// 4 = 0x4
	BOOL _connected;	// 8 = 0x8
	NSObject<OS_xpc_object> *_axUIServiceConnection;	// 12 = 0xc
}
@property(assign, nonatomic) NSObject<OS_xpc_object> *axUIServiceConnection;	// G=0x361937dd; S=0x36193425; @synthesize=_axUIServiceConnection
@property(assign, nonatomic, getter=isConnected) BOOL connected;	// G=0x361937bd; S=0x361937cd; @synthesize=_connected
@property(copy, nonatomic) NSString *identifier;	// G=0x36193799; S=0x361937ad; @synthesize=_identifier
- (void)_connectIfNeeded;	// 0x36193469
// declared property getter: - (id)axUIServiceConnection;	// 0x361937dd
- (void)connect;	// 0x361935d9
- (void)dealloc;	// 0x361933a5
- (void)disconnect;	// 0x3619374d
// declared property getter: - (id)identifier;	// 0x36193799
// declared property getter: - (BOOL)isConnected;	// 0x361937bd
- (void)sendMessage:(id)message withKey:(unsigned)key;	// 0x361934a1
// declared property setter: - (void)setAxUIServiceConnection:(id)connection;	// 0x36193425
// declared property setter: - (void)setConnected:(BOOL)connected;	// 0x361937cd
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x361937ad
@end


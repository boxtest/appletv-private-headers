/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library


@interface PTPTransport : NSObject {
	unsigned short _transportType;	// 4 = 0x4
	int _role;	// 8 = 0x8
	int _connectionStatus;	// 12 = 0xc
	id _delegate;	// 16 = 0x10
	BOOL _timedOut;	// 20 = 0x14
	BOOL _responseReceived;	// 21 = 0x15
}
@property(readonly, assign) int connectionStatus;	// G=0x301f102d; converted property
@property(readonly, assign) int role;	// G=0x301f1049; converted property
@property(assign) BOOL timedOut;	// G=0x301f105d; S=0x301f106d; converted property
@property(readonly, assign) unsigned short transportType;	// G=0x301f101d; converted property
- (id)init;	// 0x301f10a1
- (void)abortPendingIO;	// 0x301f108d
- (void)cancelTransaction:(id)transaction;	// 0x301f1091
- (BOOL)connected;	// 0x301f1059
// converted property getter: - (int)connectionStatus;	// 0x301f102d
- (void)deviceReset;	// 0x301f109d
- (unsigned short)deviceStatus;	// 0x301f1095
// converted property getter: - (int)role;	// 0x301f1049
- (BOOL)sendData:(id)data;	// 0x301f1081
- (BOOL)sendEvent:(id)event;	// 0x301f1089
- (BOOL)sendRequest:(id)request needsData:(BOOL)data;	// 0x301f107d
- (BOOL)sendResponse:(id)response;	// 0x301f1085
- (void)setDelegate:(id)delegate;	// 0x301f0ffd
- (void)setResponseReceived:(BOOL)received;	// 0x301f100d
// converted property setter: - (void)setTimedOut:(BOOL)anOut;	// 0x301f106d
- (BOOL)startInitiator;	// 0x301f1041
- (BOOL)startResponder;	// 0x301f103d
- (void)stop;	// 0x301f1045
// converted property getter: - (BOOL)timedOut;	// 0x301f105d
// converted property getter: - (unsigned short)transportType;	// 0x301f101d
@end


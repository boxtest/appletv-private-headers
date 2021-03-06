/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library
#import "ICDeviceManagerProtocol.h"

@class NSMutableDictionary, NSDictionary, DeviceManagerThread;

@interface DeviceManager : NSObject <ICDeviceManagerProtocol> {
	DeviceManagerThread *_thread;	// 4 = 0x4
	NSDictionary *_deviceMatchingInfo;	// 8 = 0x8
	NSMutableDictionary *_devices;	// 12 = 0xc
}
- (id)init;	// 0x36dcc035
- (int)closeDevice:(id)device contextInfo:(void *)info;	// 0x36dcb7bd
- (void)closeDeviceImp:(id)imp;	// 0x36dcb461
- (int)closeSession:(id)session contextInfo:(void *)info;	// 0x36dcb94d
- (void)closeSessionImp:(id)imp;	// 0x36dcb469
- (void)dealloc;	// 0x36dcbe6d
- (int)deleteFile:(id)file fromDevice:(id)device contextInfo:(void *)info;	// 0x36dcbc95
- (void)deleteFileImp:(id)imp;	// 0x36dcb479
- (int)downloadFile:(id)file fromDevice:(id)device options:(id)options contextInfo:(void *)info;	// 0x36dcbee1
- (void)downloadFileImp:(id)imp;	// 0x36dcb47d
- (int)eject:(id)eject;	// 0x36dcbd71
- (void)ejectImp:(id)imp;	// 0x36dcb481
- (int)getMetadataOfFile:(id)file fromDevice:(id)device contextInfo:(void *)info;	// 0x36dcbbb9
- (void)getMetadataOfFileImp:(id)fileImp;	// 0x36dcb475
- (int)getThumbnailOfFile:(id)file fromDevice:(id)device contextInfo:(void *)info;	// 0x36dcbadd
- (void)getThumbnailOfFileImp:(id)fileImp;	// 0x36dcb471
- (int)openDevice:(id)device contextInfo:(void *)info;	// 0x36dcb6f5
- (void)openDeviceImp:(id)imp;	// 0x36dcb45d
- (int)openSession:(id)session contextInfo:(void *)info;	// 0x36dcb885
- (void)openSessionImp:(id)imp;	// 0x36dcb465
- (void)postCommandCompletionNotification:(id)notification;	// 0x36dcbddd
- (void)postNotification:(id)notification;	// 0x36dcbe25
- (void)startRunning;	// 0x36dcb615
- (void)stopRunning;	// 0x36dcb675
- (int)syncClock:(id)clock contextInfo:(void *)info;	// 0x36dcba15
- (void)syncClockImp:(id)imp;	// 0x36dcb46d
@end


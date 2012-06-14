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
- (id)init;	// 0x358c101d
- (int)closeDevice:(id)device contextInfo:(void *)info;	// 0x358c07a5
- (void)closeDeviceImp:(id)imp;	// 0x358c0449
- (int)closeSession:(id)session contextInfo:(void *)info;	// 0x358c0935
- (void)closeSessionImp:(id)imp;	// 0x358c0451
- (void)dealloc;	// 0x358c0e55
- (int)deleteFile:(id)file fromDevice:(id)device contextInfo:(void *)info;	// 0x358c0c7d
- (void)deleteFileImp:(id)imp;	// 0x358c0461
- (int)downloadFile:(id)file fromDevice:(id)device options:(id)options contextInfo:(void *)info;	// 0x358c0ec9
- (void)downloadFileImp:(id)imp;	// 0x358c0465
- (int)eject:(id)eject;	// 0x358c0d59
- (void)ejectImp:(id)imp;	// 0x358c0469
- (int)getMetadataOfFile:(id)file fromDevice:(id)device contextInfo:(void *)info;	// 0x358c0ba1
- (void)getMetadataOfFileImp:(id)fileImp;	// 0x358c045d
- (int)getThumbnailOfFile:(id)file fromDevice:(id)device contextInfo:(void *)info;	// 0x358c0ac5
- (void)getThumbnailOfFileImp:(id)fileImp;	// 0x358c0459
- (int)openDevice:(id)device contextInfo:(void *)info;	// 0x358c06dd
- (void)openDeviceImp:(id)imp;	// 0x358c0445
- (int)openSession:(id)session contextInfo:(void *)info;	// 0x358c086d
- (void)openSessionImp:(id)imp;	// 0x358c044d
- (void)postCommandCompletionNotification:(id)notification;	// 0x358c0dc5
- (void)postNotification:(id)notification;	// 0x358c0e0d
- (void)startRunning;	// 0x358c05fd
- (void)stopRunning;	// 0x358c065d
- (int)syncClock:(id)clock contextInfo:(void *)info;	// 0x358c09fd
- (void)syncClockImp:(id)imp;	// 0x358c0455
@end

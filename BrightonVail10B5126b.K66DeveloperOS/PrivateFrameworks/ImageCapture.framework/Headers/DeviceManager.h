/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library
#import "ICDeviceManagerProtocol.h"

@class NSMutableDictionary, DeviceManagerThread, NSDictionary;

@interface DeviceManager : NSObject <ICDeviceManagerProtocol> {
	DeviceManagerThread *_thread;	// 4 = 0x4
	NSDictionary *_deviceMatchingInfo;	// 8 = 0x8
	NSMutableDictionary *_devices;	// 12 = 0xc
}
- (id)init;	// 0x341faa01
- (int)closeDevice:(id)device contextInfo:(void *)info;	// 0x341fae6d
- (void)closeDeviceImp:(id)imp;	// 0x341fb5cd
- (int)closeSession:(id)session contextInfo:(void *)info;	// 0x341faffd
- (void)closeSessionImp:(id)imp;	// 0x341fb5d5
- (void)dealloc;	// 0x341fac59
- (int)deleteFile:(id)file fromDevice:(id)device contextInfo:(void *)info;	// 0x341fb335
- (void)deleteFileImp:(id)imp;	// 0x341fb5e5
- (int)downloadFile:(id)file fromDevice:(id)device options:(id)options contextInfo:(void *)info;	// 0x341fb409
- (void)downloadFileImp:(id)imp;	// 0x341fb5e9
- (int)eject:(id)eject;	// 0x341fb55d
- (void)ejectImp:(id)imp;	// 0x341fb5ed
- (int)getMetadataOfFile:(id)file fromDevice:(id)device contextInfo:(void *)info;	// 0x341fb261
- (void)getMetadataOfFileImp:(id)fileImp;	// 0x341fb5e1
- (int)getThumbnailOfFile:(id)file fromDevice:(id)device contextInfo:(void *)info;	// 0x341fb18d
- (void)getThumbnailOfFileImp:(id)fileImp;	// 0x341fb5dd
- (int)openDevice:(id)device contextInfo:(void *)info;	// 0x341fada5
- (void)openDeviceImp:(id)imp;	// 0x341fb5c9
- (int)openSession:(id)session contextInfo:(void *)info;	// 0x341faf35
- (void)openSessionImp:(id)imp;	// 0x341fb5d1
- (void)postCommandCompletionNotification:(id)notification;	// 0x341fb5f1
- (void)postNotification:(id)notification;	// 0x341fb639
- (void)startRunning;	// 0x341faccd
- (void)stopRunning;	// 0x341fad2d
- (int)syncClock:(id)clock contextInfo:(void *)info;	// 0x341fb0c5
- (void)syncClockImp:(id)imp;	// 0x341fb5d9
@end


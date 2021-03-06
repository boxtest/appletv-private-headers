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
- (id)init;	// 0x33feda01
- (int)closeDevice:(id)device contextInfo:(void *)info;	// 0x33fede6d
- (void)closeDeviceImp:(id)imp;	// 0x33fee5cd
- (int)closeSession:(id)session contextInfo:(void *)info;	// 0x33fedffd
- (void)closeSessionImp:(id)imp;	// 0x33fee5d5
- (void)dealloc;	// 0x33fedc59
- (int)deleteFile:(id)file fromDevice:(id)device contextInfo:(void *)info;	// 0x33fee335
- (void)deleteFileImp:(id)imp;	// 0x33fee5e5
- (int)downloadFile:(id)file fromDevice:(id)device options:(id)options contextInfo:(void *)info;	// 0x33fee409
- (void)downloadFileImp:(id)imp;	// 0x33fee5e9
- (int)eject:(id)eject;	// 0x33fee55d
- (void)ejectImp:(id)imp;	// 0x33fee5ed
- (int)getMetadataOfFile:(id)file fromDevice:(id)device contextInfo:(void *)info;	// 0x33fee261
- (void)getMetadataOfFileImp:(id)fileImp;	// 0x33fee5e1
- (int)getThumbnailOfFile:(id)file fromDevice:(id)device contextInfo:(void *)info;	// 0x33fee18d
- (void)getThumbnailOfFileImp:(id)fileImp;	// 0x33fee5dd
- (int)openDevice:(id)device contextInfo:(void *)info;	// 0x33fedda5
- (void)openDeviceImp:(id)imp;	// 0x33fee5c9
- (int)openSession:(id)session contextInfo:(void *)info;	// 0x33fedf35
- (void)openSessionImp:(id)imp;	// 0x33fee5d1
- (void)postCommandCompletionNotification:(id)notification;	// 0x33fee5f1
- (void)postNotification:(id)notification;	// 0x33fee639
- (void)startRunning;	// 0x33fedccd
- (void)stopRunning;	// 0x33fedd2d
- (int)syncClock:(id)clock contextInfo:(void *)info;	// 0x33fee0c5
- (void)syncClockImp:(id)imp;	// 0x33fee5d9
@end


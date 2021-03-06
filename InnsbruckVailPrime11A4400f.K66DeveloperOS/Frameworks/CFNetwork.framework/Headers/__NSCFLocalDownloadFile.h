/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import "CFNetwork-Structs.h"
#import </libobjc.A.h>

@class NSString;
@protocol OS_dispatch_io, OS_dispatch_queue;

@interface __NSCFLocalDownloadFile : NSObject {
	stat _stat;	// 4 = 0x4
	bool _finished;	// 112 = 0x70
	BOOL _skipUnlink;	// 113 = 0x71
	NSObject<OS_dispatch_io> *_writeIO;	// 116 = 0x74
	NSObject<OS_dispatch_queue> *_workQueue;	// 120 = 0x78
	int _fd;	// 124 = 0x7c
	NSString *_path;	// 128 = 0x80
}
@property(assign) int fd;	// G=0x2cf700ed; S=0x2cf70101; @synthesize=_fd
@property(assign) bool finished;	// G=0x2cf70119; S=0x2cf70131; @synthesize=_finished
@property(retain) NSString *path;	// G=0x2cf70149; S=0x2cf7015d; @synthesize=_path
@property(assign) BOOL skipUnlink;	// G=0x2cf7016d; S=0x2cf70185; @synthesize=_skipUnlink
@property(retain) NSObject<OS_dispatch_queue> *workQueue;	// G=0x2cf700c9; S=0x2cf700dd; @synthesize=_workQueue
@property(retain) NSObject<OS_dispatch_io> *writeIO;	// G=0x2cf700a5; S=0x2cf700b9; @synthesize=_writeIO
- (id)initQueues;	// 0x2cf6f6ad
- (id)initTempFileWithDirectory:(id)directory;	// 0x2cf6f6fd
- (id)initWithExistingFile:(id)existingFile expectedSize:(long long)size;	// 0x2cf6fa4d
- (id).cxx_construct;	// 0x2cf7019d
- (void)captureFile:(id *)file outStat:(stat *)stat;	// 0x2cf6ffd9
- (void)dealloc;	// 0x2cf6fc35
// declared property getter: - (int)fd;	// 0x2cf700ed
- (id)fileURL;	// 0x2cf6ff85
- (void)finishOnQueue:(id)queue completion:(id)completion;	// 0x2cf6fe51
// declared property getter: - (bool)finished;	// 0x2cf70119
// declared property getter: - (id)path;	// 0x2cf70149
// declared property setter: - (void)setFd:(int)fd;	// 0x2cf70101
// declared property setter: - (void)setFinished:(bool)finished;	// 0x2cf70131
// declared property setter: - (void)setPath:(id)path;	// 0x2cf7015d
// declared property setter: - (void)setSkipUnlink:(BOOL)unlink;	// 0x2cf70185
// declared property setter: - (void)setWorkQueue:(id)queue;	// 0x2cf700dd
// declared property setter: - (void)setWriteIO:(id)io;	// 0x2cf700b9
// declared property getter: - (BOOL)skipUnlink;	// 0x2cf7016d
// declared property getter: - (id)workQueue;	// 0x2cf700c9
- (void)writeBytes:(id)bytes completionQueue:(id)queue completion:(id)completion;	// 0x2cf6fd05
// declared property getter: - (id)writeIO;	// 0x2cf700a5
@end


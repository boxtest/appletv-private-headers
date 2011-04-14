/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVWeakReference, NSString, NSLocale, NSMutableArray;

@interface AVChapterMetadataItemInternal : NSObject {
	AVWeakReference *weakReference;	// 4 = 0x4
	OpaqueFigFormatReaderLoader *loader;	// 8 = 0x8
	int chapterGroupIndex;	// 12 = 0xc
	int chapterIndex;	// 16 = 0x10
	NSString *chapterType;	// 20 = 0x14
	NSLocale *locale;	// 24 = 0x18
	id value;	// 28 = 0x1c
	XXStruct_pwHToB time;	// 32 = 0x20
	XXStruct_pwHToB duration;	// 56 = 0x38
	int valueStatus;	// 80 = 0x50
	int valueErrorCode;	// 84 = 0x54
	NSMutableArray *completions;	// 88 = 0x58
	dispatch_queue_s *readWriteQueue;	// 92 = 0x5c
}
@end

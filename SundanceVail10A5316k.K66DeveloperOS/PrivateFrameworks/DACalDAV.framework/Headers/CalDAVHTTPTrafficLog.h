/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library

@class DACoreDAVLogger;

@interface CalDAVHTTPTrafficLog : NSObject {
	DACoreDAVLogger *_curLogger;	// 4 = 0x4
}
+ (id)instance;	// 0x3416cf95
- (id)init;	// 0x3416cfdd
- (void)dealloc;	// 0x3416d055
- (BOOL)enabled;	// 0x3416d0a1
- (void)finishSnippets;	// 0x3416d105
- (void)logData:(id)data;	// 0x3416d199
- (void)logString:(id)string;	// 0x3416d0c5
- (void)logStringWithFormat:(id)format;	// 0x3416d109
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVPropertyFindBaseTask.h"

@class NSString;

@interface CoreDAVSyncReportTask : CoreDAVPropertyFindBaseTask {
	NSString *_previousSyncToken;	// 144 = 0x90
	NSString *_nextSyncToken;	// 148 = 0x94
	BOOL _moreToSync;	// 152 = 0x98
	BOOL _wasInvalidSyncToken;	// 153 = 0x99
}
@property(readonly, assign) BOOL moreToSync;	// G=0x3049d641; @synthesize=_moreToSync
@property(readonly, assign) NSString *nextSyncToken;	// G=0x3049d62d; @synthesize=_nextSyncToken
@property(readonly, assign) BOOL wasInvalidSyncToken;	// G=0x3049d659; @synthesize=_wasInvalidSyncToken
- (id)initWithPropertiesToFind:(id)find atURL:(id)url withDepth:(int)depth previousSyncToken:(id)token;	// 0x3049cd45
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x3049d33d
- (void)dealloc;	// 0x3049cde9
- (id)description;	// 0x3049ce4d
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x3049d3f5
- (id)httpMethod;	// 0x3049cefd
// declared property getter: - (BOOL)moreToSync;	// 0x3049d641
// declared property getter: - (id)nextSyncToken;	// 0x3049d62d
- (id)notFoundHREFs;	// 0x3049d1ad
- (id)requestBody;	// 0x3049cf09
// declared property getter: - (BOOL)wasInvalidSyncToken;	// 0x3049d659
@end

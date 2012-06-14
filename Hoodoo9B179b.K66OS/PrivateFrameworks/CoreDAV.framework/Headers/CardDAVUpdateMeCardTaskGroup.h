/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTaskGroup.h"
#import "CoreDAVPropPatchTaskDelegate.h"

@class NSURL;

@interface CardDAVUpdateMeCardTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate> {
	NSURL *_homeURL;	// 44 = 0x2c
	NSURL *_cardURL;	// 48 = 0x30
}
@property(readonly, assign) NSURL *cardURL;	// G=0x30ccaf79; @synthesize=_cardURL
@property(readonly, assign) NSURL *homeURL;	// G=0x30ccaf89; @synthesize=_homeURL
- (id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager homeURL:(id)url cardURL:(id)url4;	// 0x30ccab39
- (id)_newPropPatchTask;	// 0x30ccacb9
// declared property getter: - (id)cardURL;	// 0x30ccaf79
- (void)dealloc;	// 0x30ccaba5
- (id)description;	// 0x30ccac05
// declared property getter: - (id)homeURL;	// 0x30ccaf89
- (void)propPatchTask:(id)task parsedResponses:(id)responses error:(id)error;	// 0x30ccaed9
- (void)startTaskGroup;	// 0x30ccae05
- (void)taskGroupWillCancelWithError:(id)taskGroup;	// 0x30ccac65
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVDeleteTask.h"

@class CoreDAVAction;

@interface CoreDAVSyncDeleteTask : CoreDAVDeleteTask {
	CoreDAVAction *_action;	// 124 = 0x7c
}
@property(readonly, assign) CoreDAVAction *action;	// G=0x30fdfc0d; @synthesize=_action
// declared property getter: - (id)action;	// 0x30fdfc0d
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x30fdfb7d
- (void)setAction:(id)action;	// 0x30fdfb6d
@end


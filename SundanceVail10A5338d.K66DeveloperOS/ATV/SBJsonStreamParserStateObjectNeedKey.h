/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBJsonStreamParserState.h"


@interface SBJsonStreamParserStateObjectNeedKey : SBJsonStreamParserState {
}
+ (id)sharedInstance;	// 0x460d9d
- (id)name;	// 0x460dd9
- (BOOL)needKey;	// 0x460e2d
- (BOOL)parser:(id)parser shouldAcceptToken:(int)token;	// 0x460de5
- (void)parser:(id)parser shouldTransitionTo:(int)to;	// 0x460df1
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBJsonStreamParserState.h"


@interface SBJsonStreamParserStateObjectStart : SBJsonStreamParserState {
}
+ (id)sharedInstance;	// 0x4a87a9
- (id)name;	// 0x4a87e5
- (BOOL)needKey;	// 0x4a883d
- (BOOL)parser:(id)parser shouldAcceptToken:(int)token;	// 0x4a87f1
- (void)parser:(id)parser shouldTransitionTo:(int)to;	// 0x4a8801
@end

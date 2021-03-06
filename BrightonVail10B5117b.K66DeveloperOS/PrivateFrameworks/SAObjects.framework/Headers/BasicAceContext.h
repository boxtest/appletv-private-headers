/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceContext.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface BasicAceContext : NSObject <AceContext> {
	NSMutableDictionary *_groupMap;	// 4 = 0x4
	NSMutableDictionary *_objectMap;	// 8 = 0x8
}
- (id)init;	// 0x355972b9
- (id)aceObjectWithDictionary:(id)dictionary;	// 0x35597891
- (void)addAcronym:(id)acronym forGroup:(id)group;	// 0x3559771d
- (void)addClass:(Class)aClass forCommand:(id)command inGroup:(id)group;	// 0x3559773d
- (Class)classWithClassName:(id)className group:(id)group;	// 0x355977a1
- (void)dealloc;	// 0x355976b9
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <NSObject.h> // Unknown library
#import "AceContext.h"

@class NSMutableDictionary;

@interface BasicAceContext : NSObject <AceContext> {
	NSMutableDictionary *_groupMap;	// 4 = 0x4
	NSMutableDictionary *_objectMap;	// 8 = 0x8
}
- (id)init;	// 0x37946a15
- (id)aceObjectWithDictionary:(id)dictionary;	// 0x37946fed
- (void)addAcronym:(id)acronym forGroup:(id)group;	// 0x37946e79
- (void)addClass:(Class)aClass forCommand:(id)command inGroup:(id)group;	// 0x37946e99
- (Class)classWithClassName:(id)className group:(id)group;	// 0x37946efd
- (void)dealloc;	// 0x37946e15
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSArray, NSNumber;

@interface ASPingItem : ASItem {
	NSArray *_folders;	// 40 = 0x28
	NSNumber *_heartBeatInterval;	// 44 = 0x2c
	NSNumber *_maxFolders;	// 48 = 0x30
	NSNumber *_status;	// 52 = 0x34
}
@property(retain) NSArray *folders;	// G=0x32f10b0d; S=0x32f10b3d; converted property
@property(retain) NSNumber *heartBeatInterval;	// G=0x32f10add; S=0x32f10aa1; converted property
@property(retain) NSNumber *maxFolders;	// G=0x32f10a71; S=0x32f10a35; converted property
@property(retain) NSNumber *status;	// G=0x32f10a05; S=0x32f109c9; converted property
+ (BOOL)acceptsTopLevelLeaves;	// 0x32f10ef5
+ (BOOL)frontingBasicTypes;	// 0x32f10e1d
+ (BOOL)notifyOfUnknownTokens;	// 0x32f10dd5
+ (BOOL)parsingLeafNode;	// 0x32f10ead
+ (BOOL)parsingWithSubItems;	// 0x32f10e65
- (id)asParseRules;	// 0x32f10b79
- (void)dealloc;	// 0x32f10f3d
- (id)description;	// 0x32f10fbd
// converted property getter: - (id)folders;	// 0x32f10b0d
// converted property getter: - (id)heartBeatInterval;	// 0x32f10add
// converted property getter: - (id)maxFolders;	// 0x32f10a71
// converted property setter: - (void)setFolders:(id)folders;	// 0x32f10b3d
// converted property setter: - (void)setHeartBeatInterval:(id)interval;	// 0x32f10aa1
// converted property setter: - (void)setMaxFolders:(id)folders;	// 0x32f10a35
// converted property setter: - (void)setStatus:(id)status;	// 0x32f109c9
// converted property getter: - (id)status;	// 0x32f10a05
@end


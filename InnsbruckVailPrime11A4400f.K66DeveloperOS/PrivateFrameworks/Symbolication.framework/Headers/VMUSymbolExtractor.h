/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import </libobjc.A.h>

@class NSMutableArray;

@interface VMUSymbolExtractor : NSObject {
	NSMutableArray *_symbols;	// 4 = 0x4
	NSMutableArray *_sourceInfos;	// 8 = 0x8
}
@property(readonly, retain) NSMutableArray *sourceInfos;	// G=0x329071c1; converted property
@property(readonly, retain) NSMutableArray *symbols;	// G=0x329071b1; converted property
+ (id)expandSourceInfos:(id)infos usingSymbols:(id)symbols;	// 0x32906f19
+ (id)extractLazySymbolOwnerFromHeader:(id)header;	// 0x32906855
+ (unsigned)extractSymbolOwnerFlagsFromHeader:(id)header;	// 0x329067b1
+ (id)extractSymbolOwnerFromHeader:(id)header;	// 0x32906909
- (id)init;	// 0x32907115
- (void)dealloc;	// 0x329071d1
// converted property getter: - (id)sourceInfos;	// 0x329071c1
// converted property getter: - (id)symbols;	// 0x329071b1
@end


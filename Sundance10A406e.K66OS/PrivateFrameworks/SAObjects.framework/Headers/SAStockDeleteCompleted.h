/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSString, NSArray;

@interface SAStockDeleteCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSArray *results;	// G=0x32535059; S=0x325350f9; 
@property(copy, nonatomic) NSArray *stocks;	// G=0x32535179; S=0x325351f5; 
+ (id)deleteCompleted;	// 0x32534fc9
+ (id)deleteCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x3253500d
- (id)encodedClassName;	// 0x32534fbd
- (id)groupIdentifier;	// 0x32534fad
// declared property getter: - (id)results;	// 0x32535059
// declared property setter: - (void)setResults:(id)results;	// 0x325350f9
// declared property setter: - (void)setStocks:(id)stocks;	// 0x325351f5
// declared property getter: - (id)stocks;	// 0x32535179
@end


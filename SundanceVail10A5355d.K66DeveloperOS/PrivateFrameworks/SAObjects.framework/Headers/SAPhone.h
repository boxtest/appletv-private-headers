/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSNumber, NSString;

@interface SAPhone : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSNumber *favoriteFacetime;	// G=0x3662582d; S=0x36625849; 
@property(copy, nonatomic) NSNumber *favoriteVoice;	// G=0x36625899; S=0x366258b5; 
@property(copy, nonatomic) NSString *label;	// G=0x36625905; S=0x36625921; 
@property(copy, nonatomic) NSString *number;	// G=0x36625971; S=0x3662598d; 
+ (id)phone;	// 0x3662579d
+ (id)phoneWithDictionary:(id)dictionary context:(id)context;	// 0x366257e1
- (id)encodedClassName;	// 0x36625791
// declared property getter: - (id)favoriteFacetime;	// 0x3662582d
// declared property getter: - (id)favoriteVoice;	// 0x36625899
- (id)groupIdentifier;	// 0x36625781
// declared property getter: - (id)label;	// 0x36625905
// declared property getter: - (id)number;	// 0x36625971
// declared property setter: - (void)setFavoriteFacetime:(id)facetime;	// 0x36625849
// declared property setter: - (void)setFavoriteVoice:(id)voice;	// 0x366258b5
// declared property setter: - (void)setLabel:(id)label;	// 0x36625921
// declared property setter: - (void)setNumber:(id)number;	// 0x3662598d
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class SACalendar, SALocalSearchRating, NSString, SAUIAppPunchOut;

@interface SALocalSearchReview : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *author;	// G=0x36612edd; S=0x36612ef9; 
@property(copy, nonatomic) NSString *comment;	// G=0x36612f49; S=0x36612f65; 
@property(retain, nonatomic) SACalendar *lastUpdated;	// G=0x36612fb5; S=0x36613009; 
@property(copy, nonatomic) NSString *publication;	// G=0x36613045; S=0x36613061; 
@property(retain, nonatomic) SAUIAppPunchOut *reviewPunchOut;	// G=0x366130b1; S=0x36613105; 
@property(retain, nonatomic) SALocalSearchRating *reviewRating;	// G=0x36613141; S=0x36613195; 
+ (id)review;	// 0x36612e4d
+ (id)reviewWithDictionary:(id)dictionary context:(id)context;	// 0x36612e91
// declared property getter: - (id)author;	// 0x36612edd
// declared property getter: - (id)comment;	// 0x36612f49
- (id)encodedClassName;	// 0x36612e41
- (id)groupIdentifier;	// 0x36612e31
// declared property getter: - (id)lastUpdated;	// 0x36612fb5
// declared property getter: - (id)publication;	// 0x36613045
// declared property getter: - (id)reviewPunchOut;	// 0x366130b1
// declared property getter: - (id)reviewRating;	// 0x36613141
// declared property setter: - (void)setAuthor:(id)author;	// 0x36612ef9
// declared property setter: - (void)setComment:(id)comment;	// 0x36612f65
// declared property setter: - (void)setLastUpdated:(id)updated;	// 0x36613009
// declared property setter: - (void)setPublication:(id)publication;	// 0x36613061
// declared property setter: - (void)setReviewPunchOut:(id)anOut;	// 0x36613105
// declared property setter: - (void)setReviewRating:(id)rating;	// 0x36613195
@end

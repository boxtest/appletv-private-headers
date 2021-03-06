/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface GMMDirectionsAlert : PBCodable {
	NSString *_headline;	// 4 = 0x4
	NSString *_text;	// 8 = 0x8
	NSString *_url;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) BOOL hasHeadline;	// G=0x33cca6bd; 
@property(readonly, assign, nonatomic) BOOL hasText;	// G=0x33cca6d5; 
@property(readonly, assign, nonatomic) BOOL hasUrl;	// G=0x33cca6ed; 
@property(retain, nonatomic) NSString *headline;	// G=0x33cca9ad; S=0x33cca9bd; @synthesize=_headline
@property(retain, nonatomic) NSString *text;	// G=0x33cca9e1; S=0x33cca9f1; @synthesize=_text
@property(retain, nonatomic) NSString *url;	// G=0x33ccaa15; S=0x33ccaa25; @synthesize=_url
- (void)dealloc;	// 0x33cca651
- (id)description;	// 0x33cca705
- (id)dictionaryRepresentation;	// 0x33cca775
// declared property getter: - (BOOL)hasHeadline;	// 0x33cca6bd
// declared property getter: - (BOOL)hasText;	// 0x33cca6d5
// declared property getter: - (BOOL)hasUrl;	// 0x33cca6ed
// declared property getter: - (id)headline;	// 0x33cca9ad
- (BOOL)readFrom:(id)from;	// 0x33cca821
// declared property setter: - (void)setHeadline:(id)headline;	// 0x33cca9bd
// declared property setter: - (void)setText:(id)text;	// 0x33cca9f1
// declared property setter: - (void)setUrl:(id)url;	// 0x33ccaa25
// declared property getter: - (id)text;	// 0x33cca9e1
// declared property getter: - (id)url;	// 0x33ccaa15
- (void)writeTo:(id)to;	// 0x33cca931
@end


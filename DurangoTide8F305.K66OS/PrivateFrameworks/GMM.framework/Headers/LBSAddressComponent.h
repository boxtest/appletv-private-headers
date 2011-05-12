/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray, LBSAddressRange, LBSFeatureId;

__attribute__((visibility("hidden")))
@interface LBSAddressComponent : PBCodable {
@private
	int _type;	// 4 = 0x4
	NSMutableArray *_parsed_names;	// 8 = 0x8
	int _feature_type;	// 12 = 0xc
	BOOL _hasFeature_type;	// 16 = 0x10
	LBSFeatureId *_feature_id;	// 20 = 0x14
	LBSAddressRange *_range;	// 24 = 0x18
}
@property(retain, nonatomic) LBSFeatureId *feature_id;	// G=0x32ba567d; S=0x32ba5fcd; @synthesize=_feature_id
@property(assign, nonatomic) int feature_type;	// G=0x32ba569d; S=0x32ba5629; @synthesize=_feature_type
@property(readonly, assign, nonatomic) BOOL hasFeature_id;	// G=0x32ba5645; 
@property(readonly, assign, nonatomic) BOOL hasFeature_type;	// G=0x32ba568d; @synthesize=_hasFeature_type
@property(readonly, assign, nonatomic) BOOL hasRange;	// G=0x32ba5659; 
@property(retain, nonatomic) NSMutableArray *parsed_names;	// G=0x32ba56ad; S=0x32ba5fa5; @synthesize=_parsed_names
@property(readonly, assign, nonatomic) int parsed_namesCount;	// G=0x32ba5f15; 
@property(retain, nonatomic) LBSAddressRange *range;	// G=0x32ba566d; S=0x32ba5ff5; @synthesize=_range
@property(assign, nonatomic) int type;	// G=0x32ba56bd; S=0x32ba56cd; @synthesize=_type
- (id)init;	// 0x32ba56dd
- (void)addParsed_name:(id)name;	// 0x32ba5e19
- (void)dealloc;	// 0x32ba5f39
- (id)description;	// 0x32ba582d
- (id)dictionaryRepresentation;	// 0x32ba5709
// declared property getter: - (id)feature_id;	// 0x32ba567d
// declared property getter: - (int)feature_type;	// 0x32ba569d
// declared property getter: - (BOOL)hasFeature_id;	// 0x32ba5645
// declared property getter: - (BOOL)hasFeature_type;	// 0x32ba568d
// declared property getter: - (BOOL)hasRange;	// 0x32ba5659
- (id)parsed_nameAtIndex:(unsigned)index;	// 0x32ba5e49
// declared property getter: - (id)parsed_names;	// 0x32ba56ad
// declared property getter: - (int)parsed_namesCount;	// 0x32ba5f15
// declared property getter: - (id)range;	// 0x32ba566d
- (BOOL)readFrom:(id)from;	// 0x32ba5be1
// declared property setter: - (void)setFeature_id:(id)anId;	// 0x32ba5fcd
// declared property setter: - (void)setFeature_type:(int)type;	// 0x32ba5629
- (void)setParsed_name:(id)name atIndex:(unsigned)index;	// 0x32ba5ead
// declared property setter: - (void)setParsed_names:(id)names;	// 0x32ba5fa5
// declared property setter: - (void)setRange:(id)range;	// 0x32ba5ff5
// declared property setter: - (void)setType:(int)type;	// 0x32ba56cd
// declared property getter: - (int)type;	// 0x32ba56bd
- (void)writeTo:(id)to;	// 0x32ba59a9
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBRequest.h> // Unknown library

@class NSMutableArray, NSString;

@interface GMMClientPropertiesRequest : PBRequest {
@private
	NSString *_cohort;	// 4 = 0x4
	BOOL _has_location_fix;	// 8 = 0x8
	BOOL _hasHas_location_fix;	// 9 = 0x9
	int _mobile_country_code;	// 12 = 0xc
	BOOL _hasMobile_country_code;	// 16 = 0x10
	BOOL _gzip_enabled;	// 17 = 0x11
	BOOL _hasGzip_enabled;	// 18 = 0x12
	NSString *_application_name;	// 20 = 0x14
	NSString *_gaia_auth_token;	// 24 = 0x18
	BOOL _voice_search_enabled;	// 28 = 0x1c
	BOOL _hasVoice_search_enabled;	// 29 = 0x1d
	int _screen_pixel_density;	// 32 = 0x20
	BOOL _hasScreen_pixel_density;	// 36 = 0x24
	NSMutableArray *_experiment_ids;	// 40 = 0x28
	int _map_tile_cache_type;	// 44 = 0x2c
	BOOL _hasMap_tile_cache_type;	// 48 = 0x30
}
@property(retain, nonatomic) NSString *application_name;	// G=0x32bb434d; S=0x32bb4d15; @synthesize=_application_name
@property(retain, nonatomic) NSString *cohort;	// G=0x32bb43bd; S=0x32bb4ced; @synthesize=_cohort
@property(retain, nonatomic) NSMutableArray *experiment_ids;	// G=0x32bb42ed; S=0x32bb4d65; @synthesize=_experiment_ids
@property(readonly, assign, nonatomic) int experiment_idsCount;	// G=0x32bb4bc1; 
@property(retain, nonatomic) NSString *gaia_auth_token;	// G=0x32bb433d; S=0x32bb4d3d; @synthesize=_gaia_auth_token
@property(assign, nonatomic) BOOL gzip_enabled;	// G=0x32bb436d; S=0x32bb4231; @synthesize=_gzip_enabled
@property(readonly, assign, nonatomic) BOOL hasApplication_name;	// G=0x32bb424d; 
@property(readonly, assign, nonatomic) BOOL hasCohort;	// G=0x32bb41e5; 
@property(readonly, assign, nonatomic) BOOL hasGaia_auth_token;	// G=0x32bb4261; 
@property(readonly, assign, nonatomic) BOOL hasGzip_enabled;	// G=0x32bb435d; @synthesize=_hasGzip_enabled
@property(readonly, assign, nonatomic) BOOL hasHas_location_fix;	// G=0x32bb439d; @synthesize=_hasHas_location_fix
@property(readonly, assign, nonatomic) BOOL hasMap_tile_cache_type;	// G=0x32bb42cd; @synthesize=_hasMap_tile_cache_type
@property(readonly, assign, nonatomic) BOOL hasMobile_country_code;	// G=0x32bb437d; @synthesize=_hasMobile_country_code
@property(readonly, assign, nonatomic) BOOL hasScreen_pixel_density;	// G=0x32bb42fd; @synthesize=_hasScreen_pixel_density
@property(readonly, assign, nonatomic) BOOL hasVoice_search_enabled;	// G=0x32bb431d; @synthesize=_hasVoice_search_enabled
@property(assign, nonatomic) BOOL has_location_fix;	// G=0x32bb43ad; S=0x32bb41f9; @synthesize=_has_location_fix
@property(assign, nonatomic) int map_tile_cache_type;	// G=0x32bb42dd; S=0x32bb42ad; @synthesize=_map_tile_cache_type
@property(assign, nonatomic) int mobile_country_code;	// G=0x32bb438d; S=0x32bb4215; @synthesize=_mobile_country_code
@property(assign, nonatomic) int screen_pixel_density;	// G=0x32bb430d; S=0x32bb4291; @synthesize=_screen_pixel_density
@property(assign, nonatomic) BOOL voice_search_enabled;	// G=0x32bb432d; S=0x32bb4275; @synthesize=_voice_search_enabled
- (id)init;	// 0x32bb4c65
- (void)addExperiment_id:(int)anId;	// 0x32bb4a99
// declared property getter: - (id)application_name;	// 0x32bb434d
// declared property getter: - (id)cohort;	// 0x32bb43bd
- (void)dealloc;	// 0x32bb4be5
- (id)description;	// 0x32bb43cd
- (int)experiment_idAtIndex:(unsigned)index;	// 0x32bb4ac9
// declared property getter: - (id)experiment_ids;	// 0x32bb42ed
// declared property getter: - (int)experiment_idsCount;	// 0x32bb4bc1
// declared property getter: - (id)gaia_auth_token;	// 0x32bb433d
// declared property getter: - (BOOL)gzip_enabled;	// 0x32bb436d
// declared property getter: - (BOOL)hasApplication_name;	// 0x32bb424d
// declared property getter: - (BOOL)hasCohort;	// 0x32bb41e5
// declared property getter: - (BOOL)hasGaia_auth_token;	// 0x32bb4261
// declared property getter: - (BOOL)hasGzip_enabled;	// 0x32bb435d
// declared property getter: - (BOOL)hasHas_location_fix;	// 0x32bb439d
// declared property getter: - (BOOL)hasMap_tile_cache_type;	// 0x32bb42cd
// declared property getter: - (BOOL)hasMobile_country_code;	// 0x32bb437d
// declared property getter: - (BOOL)hasScreen_pixel_density;	// 0x32bb42fd
// declared property getter: - (BOOL)hasVoice_search_enabled;	// 0x32bb431d
// declared property getter: - (BOOL)has_location_fix;	// 0x32bb43ad
// declared property getter: - (int)map_tile_cache_type;	// 0x32bb42dd
// declared property getter: - (int)mobile_country_code;	// 0x32bb438d
- (BOOL)readFrom:(id)from;	// 0x32bb487d
- (unsigned)requestTypeCode;	// 0x32bb42c9
- (Class)responseClass;	// 0x32bb4cd9
// declared property getter: - (int)screen_pixel_density;	// 0x32bb430d
// declared property setter: - (void)setApplication_name:(id)name;	// 0x32bb4d15
// declared property setter: - (void)setCohort:(id)cohort;	// 0x32bb4ced
- (void)setExperiment_id:(int)anId atIndex:(unsigned)index;	// 0x32bb4b39
// declared property setter: - (void)setExperiment_ids:(id)ids;	// 0x32bb4d65
// declared property setter: - (void)setGaia_auth_token:(id)token;	// 0x32bb4d3d
// declared property setter: - (void)setGzip_enabled:(BOOL)enabled;	// 0x32bb4231
// declared property setter: - (void)setHas_location_fix:(BOOL)fix;	// 0x32bb41f9
// declared property setter: - (void)setMap_tile_cache_type:(int)type;	// 0x32bb42ad
// declared property setter: - (void)setMobile_country_code:(int)code;	// 0x32bb4215
// declared property setter: - (void)setScreen_pixel_density:(int)density;	// 0x32bb4291
// declared property setter: - (void)setVoice_search_enabled:(BOOL)enabled;	// 0x32bb4275
// declared property getter: - (BOOL)voice_search_enabled;	// 0x32bb432d
- (void)writeTo:(id)to;	// 0x32bb4641
@end


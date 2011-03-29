#import "cocos2d.h"

#define DURATION_DEFAULT (1.2f)

#define TransitionTypeJumpZoom          @"CCTransitionJumpZoom"
#define TransitionTypeCrossFade         @"CCTransitionCrossFade"
#define TransitionTypeRadialCCW         @"CCTransitionRadialCCW"
#define TransitionTypeRadialCW          @"CCTransitionRadialCW"
#define TransitionTypePageForward       @"TransitionPageForward"
#define TransitionTypePageBackward      @"TransitionPageBackward"
#define TransitionTypeFadeTR            @"CCTransitionFadeTR"
#define TransitionTypeFadeBL            @"CCTransitionFadeBL"
#define TransitionTypeFadeUp            @"CCTransitionFadeUp"
#define TransitionTypeFadeDown          @"CCTransitionFadeDown"
#define TransitionTypeTurnOffTiles      @"CCTransitionTurnOffTiles"
#define TransitionTypeSplitRows         @"CCTransitionSplitRows"
#define TransitionTypeSplitCols         @"CCTransitionSplitCols"
#define TransitionTypeFade              @"CCTransitionFade"
#define TransitionTypeFadeWhite         @"FadeWhiteTransition"
#define TransitionTypeFlipXLeftOver     @"FlipXLeftOver"
#define TransitionTypeFlipXRightOver    @"FlipXRightOver"
#define TransitionTypeFlipYUpOver       @"FlipYUpOver"
#define TransitionTypeFlipYDownOver     @"FlipYDownOver"
#define TransitionTypeFlipAngularLeftOver @"FlipAngularLeftOver"
#define TransitionTypeFlipAngularRightOver @"FlipAngularRightOver"
#define TransitionTypeZoomFlipXLeftOver @"ZoomFlipXLeftOver"
#define TransitionTypeZoomFlipXRightOver @"ZoomFlipXRightOver"
#define TransitionTypeZoomFlipYUpOver   @"ZoomFlipYUpOver"
#define TransitionTypeZoomFlipYDownOver @"ZoomFlipYDownOver"
#define TransitionTypeZoomFlipAngularLeftOver @"ZoomFlipAngularLeftOver"
#define TransitionTypeZoomFlipAngularRightOver @"ZoomFlipAngularRightOver"
#define TransitionTypeZoomShrinkGrow    @"CCTransitionShrinkGrow"
#define TransitionTypeRotoZoom          @"CCTransitionRotoZoom"
#define TransitionTypeMoveInL           @"CCTransitionMoveInL"
#define TransitionTypeMoveInR           @"CCTransitionMoveInR"
#define TransitionTypeMoveInT           @"CCTransitionMoveInT"
#define TransitionTypeMoveInB           @"CCTransitionMoveInB"
#define TransitionTypeSlideInL          @"CCTransitionSlideInL"
#define TransitionTypeSlideInR          @"CCTransitionSlideInR"
#define TransitionTypeSlideInT          @"CCTransitionSlideInT"
#define TransitionTypeSlideInB          @"CCTransitionSlideInB"


@interface CCTransitionHelper : NSObject
{
    
}
+ (void)replaceScene:(CCScene *)scene transitionType:(NSString *)type duration:(ccTime)duration;
+ (void)pushScene:(CCScene *)scene transitionType:(NSString *)type duration:(ccTime)duration;
+ (void)runWithScene:(CCScene *)scene transitionType:(NSString *)type duration:(ccTime)duration;

@end
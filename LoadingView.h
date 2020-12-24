//
//  LoadingView.h
//  Yehwang
//
//  Created by 时光与你 on 2018/5/24.
//  Copyright © 2018年 Yehwang. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *  A control similar to iOS' UIActivityIndicatorView modeled after Google's Material Design Activity spinner.
 */
@interface LoadingView : UIView

/** Sets the line width of the spinner's circle. */
@property (nonatomic) CGFloat lineWidth;

/** Sets whether the view is hidden when not animating. */
@property (nonatomic) BOOL hidesWhenStopped;

/** Specifies the timing function to use for the control's animation. Defaults to kCAMediaTimingFunctionEaseInEaseOut */
@property (nonatomic, strong) CAMediaTimingFunction *timingFunction;

/** Property indicating whether the view is currently animating. */
@property (nonatomic, readonly) BOOL isAnimating;

@property (nonatomic, readwrite) NSTimeInterval duration;

@property (nonatomic) CGFloat percentComplete;

/**
 *  Convenience function for starting & stopping animation with a boolean variable instead of explicit
 *  method calls.
 *
 *  @param animate true to start animating, false to stop animating.
 @note This method simply calls the startAnimating or stopAnimating methods based on the value of the animate parameter.
 */
- (void)setAnimating:(BOOL)animate;

/**
 *  Starts animation of the spinner.
 */
- (void)startAnimating;

/**
 *  Stops animation of the spinnner.
 */
- (void)stopAnimating;
@end

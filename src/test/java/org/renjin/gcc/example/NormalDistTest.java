package org.renjin.gcc.example;

import org.junit.Test;

import static org.hamcrest.Matchers.closeTo;
import static org.junit.Assert.assertThat;

/**
 * Example of using a compiled C function from Java
 */
public class NormalDistTest {

  @Test
  public void pgammaTest() {
    
    // Defined in pnorm.c
    // double pnorm5(double x, double mu, double sigma, int lower_tail, int log_p)

    double p = org.renjin.gcc.example.Example.pnorm5(0.5, 0, 1, 1, 0);
    assertThat(p, closeTo(0.6914, 0.0001));
  }
  
}
